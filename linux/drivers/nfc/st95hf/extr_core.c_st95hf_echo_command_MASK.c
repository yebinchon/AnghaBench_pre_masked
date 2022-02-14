
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
 int FUNC_0 (int *,char*,unsigned char) ;
 int FUNC_1 (struct st95hf_context*,int ,int ,int *,int) ;
 int FUNC_2 (TYPE_2__*,unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct st95hf_context *VAR_3)
{
 int VAR_4 = 0;
 unsigned char VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_0, 0, ((void*)0), 0);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_2(&VAR_3->spicontext,
       &VAR_5);
 if (VAR_4) {
  FUNC_0(&VAR_3->spicontext.spidev->dev,
   "err: echo response receive error = 0x%x\n", VAR_4);
  return VAR_4;
 }

 if (VAR_5 == VAR_1)
  return 0;

 FUNC_0(&VAR_3->spicontext.spidev->dev, "err: echo res is 0x%x\n",
  VAR_5);

 return -VAR_2;
}
