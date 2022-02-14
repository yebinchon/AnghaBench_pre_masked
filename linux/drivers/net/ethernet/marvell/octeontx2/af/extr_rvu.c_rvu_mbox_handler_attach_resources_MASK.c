
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rvu {int rsrc_lock; } ;
struct TYPE_2__ {int pcifunc; } ;
struct rsrc_attach {int sso; int ssow; int timlfs; int cptlfs; scalar_t__ modify; scalar_t__ nixlf; scalar_t__ npalf; TYPE_1__ hdr; } ;
struct msg_rsp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rvu*,int ,int ,int) ;
 int FUNC_3 (struct rvu*,struct rsrc_attach*,int ) ;
 int FUNC_4 (struct rvu*,int ,int ) ;
 int FUNC_5 (struct rvu*,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct rvu *VAR_6,
          struct rsrc_attach *VAR_7,
          struct msg_rsp *VAR_8)
{
 u16 VAR_9 = VAR_7->hdr.pcifunc;
 int VAR_10;


 if (!VAR_7->modify)
  FUNC_5(VAR_6, ((void*)0), VAR_9);

 FUNC_0(&VAR_6->rsrc_lock);


 VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_9);
 if (VAR_10)
  goto exit;


 if (VAR_7->npalf)
  FUNC_2(VAR_6, VAR_9, VAR_2, 1);

 if (VAR_7->nixlf)
  FUNC_2(VAR_6, VAR_9, VAR_1, 1);

 if (VAR_7->sso) {





  if (VAR_7->modify)
   FUNC_4(VAR_6, VAR_9, VAR_3);
  FUNC_2(VAR_6, VAR_9, VAR_3, VAR_7->sso);
 }

 if (VAR_7->ssow) {
  if (VAR_7->modify)
   FUNC_4(VAR_6, VAR_9, VAR_4);
  FUNC_2(VAR_6, VAR_9, VAR_4, VAR_7->ssow);
 }

 if (VAR_7->timlfs) {
  if (VAR_7->modify)
   FUNC_4(VAR_6, VAR_9, VAR_5);
  FUNC_2(VAR_6, VAR_9, VAR_5, VAR_7->timlfs);
 }

 if (VAR_7->cptlfs) {
  if (VAR_7->modify)
   FUNC_4(VAR_6, VAR_9, VAR_0);
  FUNC_2(VAR_6, VAR_9, VAR_0, VAR_7->cptlfs);
 }

exit:
 FUNC_1(&VAR_6->rsrc_lock);
 return VAR_10;
}
