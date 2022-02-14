
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm_pool_mgr {int * ops; int private_data; } ;
typedef size_t const phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct tee_shm_pool_mgr* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,unsigned long,size_t const,size_t,int) ;
 int VAR_4 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct tee_shm_pool_mgr*) ;
 struct tee_shm_pool_mgr* FUNC_6 (int,int ) ;
 int VAR_5 ;

struct tee_shm_pool_mgr *FUNC_7(unsigned long VAR_6,
       phys_addr_t VAR_7,
       size_t VAR_8,
       int VAR_9)
{
 const size_t VAR_10 = VAR_3 - 1;
 struct tee_shm_pool_mgr *VAR_11;
 int VAR_12;


 if (VAR_6 & VAR_10 || VAR_7 & VAR_10 || VAR_8 & VAR_10)
  return FUNC_0(-VAR_0);

 VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_11->private_data = FUNC_2(VAR_9, -1);
 if (!VAR_11->private_data) {
  VAR_12 = -VAR_1;
  goto err;
 }

 FUNC_4(VAR_11->private_data, VAR_4, ((void*)0));
 VAR_12 = FUNC_1(VAR_11->private_data, VAR_6, VAR_7, VAR_8, -1);
 if (VAR_12) {
  FUNC_3(VAR_11->private_data);
  goto err;
 }

 VAR_11->ops = &VAR_5;

 return VAR_11;
err:
 FUNC_5(VAR_11);

 return FUNC_0(VAR_12);
}
