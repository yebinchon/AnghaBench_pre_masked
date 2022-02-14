
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfcsim {int up; int nfc_digital_dev; int recv_work; int send_work; int link_in; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfcsim*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct nfcsim *VAR_0)
{
 FUNC_4(VAR_0->nfc_digital_dev);

 VAR_0->up = 0;

 FUNC_5(VAR_0->link_in);

 FUNC_0(&VAR_0->send_work);
 FUNC_1(&VAR_0->recv_work);

 FUNC_3(VAR_0->nfc_digital_dev);

 FUNC_2(VAR_0);
}
