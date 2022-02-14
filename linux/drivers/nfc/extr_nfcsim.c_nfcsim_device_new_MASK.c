
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfcsim_link {int dummy; } ;
struct nfcsim {int nfc_digital_dev; struct nfcsim_link* link_out; struct nfcsim_link* link_in; int recv_work; int send_work; } ;


 int VAR_0 ;
 struct nfcsim* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct nfcsim*) ;
 struct nfcsim* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct nfcsim*) ;
 int FUNC_9 (struct nfcsim*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static struct nfcsim *FUNC_11(struct nfcsim_link *VAR_7,
     struct nfcsim_link *VAR_8)
{
 struct nfcsim *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(sizeof(struct nfcsim), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_9->send_work, VAR_6);
 FUNC_2(&VAR_9->recv_work, VAR_5);

 VAR_9->nfc_digital_dev =
   FUNC_5(&VAR_4,
          VAR_3,
          VAR_2,
          0, 0);
 if (!VAR_9->nfc_digital_dev) {
  FUNC_3(VAR_9);
  return FUNC_0(-VAR_0);
 }

 FUNC_8(VAR_9->nfc_digital_dev, VAR_9);

 VAR_9->link_in = VAR_7;
 VAR_9->link_out = VAR_8;

 VAR_10 = FUNC_7(VAR_9->nfc_digital_dev);
 if (VAR_10) {
  FUNC_10("Could not register digital device (%d)\n", VAR_10);
  FUNC_6(VAR_9->nfc_digital_dev);
  FUNC_3(VAR_9);

  return FUNC_0(VAR_10);
 }

 FUNC_9(VAR_9);

 return VAR_9;
}
