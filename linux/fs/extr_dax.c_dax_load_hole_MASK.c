
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct xa_state {int dummy; } ;
struct vm_fault {unsigned long address; int vma; } ;
struct inode {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int pfn_t ;


 int VAR_0 ;
 void* FUNC_0 (struct xa_state*,struct address_space*,struct vm_fault*,void*,int ,int ,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct vm_fault*,int ) ;
 int FUNC_4 (int ,unsigned long,int ) ;

__attribute__((used)) static vm_fault_t FUNC_5(struct xa_state *VAR_1,
  struct address_space *VAR_2, void **VAR_3,
  struct vm_fault *VAR_4)
{
 struct inode *VAR_5 = VAR_2->host;
 unsigned long VAR_6 = VAR_4->address;
 pfn_t VAR_7 = FUNC_2(FUNC_1(VAR_6));
 vm_fault_t VAR_8;

 *VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_4, *VAR_3, VAR_7,
   VAR_0, 0);

 VAR_8 = FUNC_4(VAR_4->vma, VAR_6, VAR_7);
 FUNC_3(VAR_5, VAR_4, VAR_8);
 return VAR_8;
}
