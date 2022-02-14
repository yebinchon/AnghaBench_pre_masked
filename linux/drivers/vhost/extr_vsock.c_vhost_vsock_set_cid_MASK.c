
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vhost_vsock {scalar_t__ guest_cid; int hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct vhost_vsock* FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct vhost_vsock *VAR_6, u64 VAR_7)
{
 struct vhost_vsock *VAR_8;


 if (VAR_7 <= VAR_3 ||
     VAR_7 == VAR_2)
  return -VAR_1;


 if (VAR_7 > VAR_2)
  return -VAR_1;


 FUNC_2(&VAR_5);
 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8 && VAR_8 != VAR_6) {
  FUNC_3(&VAR_5);
  return -VAR_0;
 }

 if (VAR_6->guest_cid)
  FUNC_1(&VAR_6->hash);

 VAR_6->guest_cid = VAR_7;
 FUNC_0(VAR_4, &VAR_6->hash, VAR_6->guest_cid);
 FUNC_3(&VAR_5);

 return 0;
}
