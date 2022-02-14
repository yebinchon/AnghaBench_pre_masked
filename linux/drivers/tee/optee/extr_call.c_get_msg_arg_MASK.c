
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm {size_t num_params; } ;
struct tee_context {int dummy; } ;
struct optee_msg_arg {size_t num_params; } ;
typedef int phys_addr_t ;


 struct tee_shm* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tee_shm*) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (struct tee_shm*) ;
 int VAR_0 ;
 int FUNC_4 (struct tee_shm*,int ,int ) ;
 struct tee_shm* FUNC_5 (struct tee_context*,int ,int ) ;
 int FUNC_6 (struct tee_shm*) ;
 int FUNC_7 (struct tee_shm*,int ,int *) ;
 struct tee_shm* FUNC_8 (struct tee_shm*,int ) ;

__attribute__((used)) static struct tee_shm *FUNC_9(struct tee_context *VAR_1, size_t VAR_2,
       struct optee_msg_arg **VAR_3,
       phys_addr_t *VAR_4)
{
 int VAR_5;
 struct tee_shm *VAR_6;
 struct optee_msg_arg *VAR_7;

 VAR_6 = FUNC_5(VAR_1, FUNC_2(VAR_2),
       VAR_0);
 if (FUNC_1(VAR_6))
  return VAR_6;

 VAR_7 = FUNC_8(VAR_6, 0);
 if (FUNC_1(VAR_7)) {
  VAR_5 = FUNC_3(VAR_7);
  goto out;
 }

 VAR_5 = FUNC_7(VAR_6, 0, VAR_4);
 if (VAR_5)
  goto out;

 FUNC_4(VAR_7, 0, FUNC_2(VAR_2));
 VAR_7->num_params = VAR_2;
 *VAR_3 = VAR_7;
out:
 if (VAR_5) {
  FUNC_6(VAR_6);
  return FUNC_0(VAR_5);
 }

 return VAR_6;
}
