
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct tee_shm {int b; } const tee_shm ;
typedef struct tee_shm uuid_t ;
typedef int u32 ;
struct tee_ioctl_open_session_arg {scalar_t__ ret; int session; scalar_t__ num_params; int clnt_login; int uuid; } ;
typedef struct tee_context {int b; } const tee_context ;
typedef int sess_arg ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tee_shm const*) ;
 int FUNC_1 (struct tee_shm const*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tee_shm FUNC_2 (int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_3 (struct tee_shm const*,int ,struct tee_shm const*,int*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct tee_ioctl_open_session_arg*,int ,int) ;
 int VAR_6 ;
 int FUNC_6 (struct tee_shm const*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct tee_shm const*) ;
 int FUNC_9 (struct tee_shm const*,int ) ;
 struct tee_shm* FUNC_10 (int *,int ,int *,int *) ;
 int FUNC_11 (struct tee_shm const*,struct tee_ioctl_open_session_arg*,int *) ;
 struct tee_shm* FUNC_12 (struct tee_shm const*,int,int) ;
 int FUNC_13 (struct tee_shm const*) ;
 struct tee_shm* FUNC_14 (struct tee_shm const*,int ) ;

int FUNC_15(void)
{
 const uuid_t VAR_7 =
  FUNC_2(0x7011a688, 0xddde, 0x4053,
     0xa5, 0xa9, 0x7b, 0x3c, 0x4d, 0xdf, 0x13, 0xb8);
 struct tee_ioctl_open_session_arg VAR_8;
 struct tee_shm *VAR_9 = ((void*)0);
 const uuid_t *VAR_10 = ((void*)0);
 struct tee_context *VAR_11 = ((void*)0);
 u32 VAR_12 = 0, VAR_13, VAR_14 = 0;
 int VAR_15;

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));


 VAR_11 = FUNC_10(((void*)0), VAR_6, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_11))
  return -VAR_0;


 FUNC_4(VAR_8.uuid, VAR_7.b, VAR_3);
 VAR_8.clnt_login = VAR_2;
 VAR_8.num_params = 0;

 VAR_15 = FUNC_11(VAR_11, &VAR_8, ((void*)0));
 if ((VAR_15 < 0) || (VAR_8.ret != VAR_1)) {

  VAR_15 = 0;
  goto out_ctx;
 }

 VAR_15 = FUNC_3(VAR_11, VAR_8.session, ((void*)0), &VAR_12);
 if (VAR_15 < 0 || !VAR_12)
  goto out_sess;

 VAR_9 = FUNC_12(VAR_11, VAR_12,
       VAR_5 | VAR_4);
 if (FUNC_0(VAR_9)) {
  FUNC_7("tee_shm_alloc failed\n");
  VAR_15 = FUNC_1(VAR_9);
  goto out_sess;
 }

 VAR_15 = FUNC_3(VAR_11, VAR_8.session, VAR_9, &VAR_12);
 if (VAR_15 < 0)
  goto out_shm;

 VAR_10 = FUNC_14(VAR_9, 0);
 if (FUNC_0(VAR_10)) {
  FUNC_7("tee_shm_get_va failed\n");
  VAR_15 = FUNC_1(VAR_10);
  goto out_shm;
 }

 VAR_14 = VAR_12 / sizeof(uuid_t);

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_15 = FUNC_6(&VAR_10[VAR_13], VAR_13);
  if (VAR_15)
   goto out_shm;
 }

out_shm:
 FUNC_13(VAR_9);
out_sess:
 FUNC_9(VAR_11, VAR_8.session);
out_ctx:
 FUNC_8(VAR_11);

 return VAR_15;
}
