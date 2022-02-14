
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmid_kernel {int shm_file; } ;
struct shmem_inode_info {int lock; scalar_t__ swapped; } ;
struct inode {struct address_space* i_mapping; } ;
struct hstate {int dummy; } ;
struct address_space {unsigned long nrpages; } ;


 struct shmem_inode_info* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 struct hstate* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned long FUNC_4 (struct hstate*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct shmid_kernel *VAR_0,
 unsigned long *VAR_1, unsigned long *VAR_2)
{
 struct inode *VAR_3;

 VAR_3 = FUNC_1(VAR_0->shm_file);

 if (FUNC_3(VAR_0->shm_file)) {
  struct address_space *VAR_4 = VAR_3->i_mapping;
  struct hstate *VAR_5 = FUNC_2(VAR_0->shm_file);
  *VAR_1 += FUNC_4(VAR_5) * VAR_4->nrpages;
 } else {
  *VAR_1 += VAR_3->i_mapping->nrpages;

 }
}
