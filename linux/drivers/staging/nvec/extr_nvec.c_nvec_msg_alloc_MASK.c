
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvec_msg {int used; } ;
struct nvec_chip {int dev; struct nvec_msg* msg_pool; } ;
typedef enum nvec_msg_category { ____Placeholder_nvec_msg_category } nvec_msg_category ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static struct nvec_msg *FUNC_3(struct nvec_chip *VAR_2,
           enum nvec_msg_category VAR_3)
{
 int VAR_4 = (VAR_3 == VAR_0) ? (VAR_1 / 4) : 0;

 for (; VAR_4 < VAR_1; VAR_4++) {
  if (FUNC_0(&VAR_2->msg_pool[VAR_4].used, 1) == 0) {
   FUNC_2(VAR_2->dev, "INFO: Allocate %i\n", VAR_4);
   return &VAR_2->msg_pool[VAR_4];
  }
 }

 FUNC_1(VAR_2->dev, "could not allocate %s buffer\n",
  (VAR_3 == VAR_0) ? "TX" : "RX");

 return ((void*)0);
}
