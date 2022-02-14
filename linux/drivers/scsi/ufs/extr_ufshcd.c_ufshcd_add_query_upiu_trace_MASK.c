
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct utp_upiu_req {int qr; int header; } ;
struct ufs_hba {int dev; TYPE_1__* lrb; } ;
struct TYPE_2__ {struct utp_upiu_req* ucd_req_ptr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct ufs_hba *VAR_0, unsigned int VAR_1,
  const char *VAR_2)
{
 struct utp_upiu_req *VAR_3 = VAR_0->lrb[VAR_1].ucd_req_ptr;

 FUNC_1(FUNC_0(VAR_0->dev), VAR_2, &VAR_3->header, &VAR_3->qr);
}
