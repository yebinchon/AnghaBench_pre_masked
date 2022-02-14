
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wildcard ;
typedef char u8 ;
struct iucv_path {int msglim; int flags; } ;
struct hvc_iucv_private {scalar_t__ iucv_state; char* srv_name; char* info_path; int lock; int sndbuf_work; struct iucv_path* path; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct hvc_iucv_private** VAR_7 ;
 int FUNC_2 (struct iucv_path*,int *,char*,struct hvc_iucv_private*) ;
 int FUNC_3 (struct iucv_path*) ;
 int FUNC_4 (struct iucv_path*,char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct iucv_path *VAR_8, u8 *VAR_9,
      u8 *VAR_10)
{
 struct hvc_iucv_private *VAR_11, *VAR_12;
 u8 VAR_13[9] = "lnxhvc  ";
 int VAR_14, VAR_15, VAR_16;
 u8 VAR_17[16];
 u8 VAR_18[9];

 FUNC_0(VAR_13, sizeof(VAR_13));
 VAR_16 = !FUNC_5(VAR_13, VAR_10, 8);






 VAR_11 = ((void*)0);
 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  VAR_12 = VAR_7[VAR_14];
  if (!VAR_12)
   continue;

  if (VAR_16) {
   FUNC_11(&VAR_12->lock);
   if (VAR_12->iucv_state == VAR_2)
    VAR_11 = VAR_12;
   FUNC_12(&VAR_12->lock);

  } else if (!FUNC_5(VAR_12->srv_name, VAR_10, 8))
    VAR_11 = VAR_12;
  if (VAR_11)
   break;
 }
 if (!VAR_11)
  return -VAR_0;


 FUNC_8(&VAR_5);
 VAR_15 = FUNC_1(VAR_9);
 FUNC_9(&VAR_5);
 if (VAR_15) {
  FUNC_4(VAR_8, VAR_10);
  FUNC_3(VAR_8);
  FUNC_6(VAR_18, VAR_9, 8);
  VAR_18[8] = 0;
  FUNC_7("A connection request from z/VM user ID %s "
   "was refused\n", VAR_18);
  return 0;
 }

 FUNC_11(&VAR_11->lock);




 if (VAR_11->iucv_state != VAR_2) {
  FUNC_4(VAR_8, VAR_10);
  FUNC_3(VAR_8);
  goto out_path_handled;
 }


 FUNC_6(VAR_17, VAR_10 + 8, 8);
 FUNC_6(VAR_17 + 8, VAR_10, 8);
 VAR_8->msglim = 0xffff;
 VAR_8->flags &= ~VAR_3;
 VAR_15 = FUNC_2(VAR_8, &VAR_6, VAR_17, VAR_11);
 if (VAR_15) {
  FUNC_4(VAR_8, VAR_10);
  FUNC_3(VAR_8);
  goto out_path_handled;
 }
 VAR_11->path = VAR_8;
 VAR_11->iucv_state = VAR_1;


 FUNC_6(VAR_11->info_path, VAR_9, 8);
 FUNC_6(VAR_11->info_path + 8, VAR_10 + 8, 8);


 FUNC_10(&VAR_11->sndbuf_work, 5);

out_path_handled:
 FUNC_12(&VAR_11->lock);
 return 0;
}
