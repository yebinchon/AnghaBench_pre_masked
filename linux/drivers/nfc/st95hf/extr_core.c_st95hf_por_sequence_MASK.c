
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
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct st95hf_context*) ;
 int FUNC_2 (struct st95hf_context*) ;
 int FUNC_3 (struct st95hf_context*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct st95hf_context *VAR_1)
{
 int VAR_2 = 1;
 int VAR_3;

 FUNC_3(VAR_1);

 FUNC_4(5000, 6000);
 do {

  VAR_3 = FUNC_1(VAR_1);

  FUNC_0(&VAR_1->spicontext.spidev->dev,
   "response from echo function = 0x%x, attempt = %d\n",
   VAR_3, VAR_2);

  if (!VAR_3)
   return 0;


  if (VAR_2 == 2)
   FUNC_3(VAR_1);
  else
   FUNC_2(VAR_1);


  FUNC_4(50000, 51000);
 } while (VAR_2++ < 3);

 return -VAR_0;
}
