
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union recv_frame {int dummy; } recv_frame ;
struct ht_priv {int ht_option; } ;
struct mlme_priv {struct ht_priv htpriv; } ;
struct _adapter {int surprise_removed; int driver_stopped; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct _adapter*,union recv_frame*) ;
 int FUNC_1 (union recv_frame*) ;
 scalar_t__ FUNC_2 (struct _adapter*,union recv_frame*) ;

__attribute__((used)) static int FUNC_3(struct _adapter *VAR_2,
         union recv_frame *VAR_3)
{
 int VAR_4 = VAR_1;
 struct mlme_priv *VAR_5 = &VAR_2->mlmepriv;
 struct ht_priv *VAR_6 = &VAR_5->htpriv;

 if (VAR_6->ht_option == 1) {
  if (FUNC_2(VAR_2, VAR_3)) {

   if (!VAR_2->driver_stopped &&
       !VAR_2->surprise_removed)
    return VAR_0;
  }
 } else {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4)
   return VAR_0;
  if (!VAR_2->driver_stopped && !VAR_2->surprise_removed) {

   FUNC_0(VAR_2, VAR_3);
  } else {
   return VAR_0;
  }
 }
 return VAR_4;
}
