
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipvl_dev {int addrs_lock; } ;
struct ipvl_addr {int anode; } ;


 struct ipvl_addr* FUNC_0 (struct ipvl_dev*,void*,int) ;
 int FUNC_1 (struct ipvl_addr*) ;
 int FUNC_2 (struct ipvl_addr*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ipvl_dev *VAR_1, void *VAR_2, bool VAR_3)
{
 struct ipvl_addr *VAR_4;

 FUNC_4(&VAR_1->addrs_lock);
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (!VAR_4) {
  FUNC_5(&VAR_1->addrs_lock);
  return;
 }

 FUNC_1(VAR_4);
 FUNC_3(&VAR_4->anode);
 FUNC_5(&VAR_1->addrs_lock);
 FUNC_2(VAR_4, VAR_0);
}
