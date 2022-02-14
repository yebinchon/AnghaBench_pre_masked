
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* spidev; } ;
struct st95hf_context {TYPE_2__ spicontext; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct st95hf_context*) ;
 int FUNC_2 (TYPE_2__*,unsigned char*,int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct st95hf_context *VAR_3)
{
 int VAR_4 = 0;
 unsigned char VAR_5 = VAR_1;

 VAR_4 = FUNC_2(&VAR_3->spicontext,
     &VAR_5,
     VAR_2,
     VAR_0);
 if (VAR_4) {
  FUNC_0(&VAR_3->spicontext.spidev->dev,
   "spi reset sequence cmd error = %d", VAR_4);
  return VAR_4;
 }


 FUNC_3(3000, 4000);


 FUNC_1(VAR_3);


 FUNC_3(10000, 20000);

 return VAR_4;
}
