
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ceph_inode_info {int dummy; } ;
struct ceph_inode_frag {int split_by; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct ceph_inode_frag* FUNC_2 (struct ceph_inode_info*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,unsigned int) ;
 int FUNC_6 (char*,int ,int ,...) ;
 int FUNC_7 (struct ceph_inode_frag*,struct ceph_inode_frag*,int) ;

__attribute__((used)) static u32 FUNC_8(struct ceph_inode_info *VAR_0, u32 VAR_1,
         struct ceph_inode_frag *VAR_2, int *VAR_3)
{
 u32 VAR_4 = FUNC_4(0, 0);
 struct ceph_inode_frag *VAR_5;
 unsigned VAR_6, VAR_7;
 u32 VAR_8;

 if (VAR_3)
  *VAR_3 = 0;

 while (1) {
  FUNC_1(!FUNC_3(VAR_4, VAR_1));
  VAR_5 = FUNC_2(VAR_0, VAR_4);
  if (!VAR_5)
   break;
  if (VAR_5->split_by == 0) {
   if (VAR_2)
    FUNC_7(VAR_2, VAR_5, sizeof(*VAR_2));
   if (VAR_3)
    *VAR_3 = 1;
   break;
  }


  VAR_6 = 1 << VAR_5->split_by;
  FUNC_6("choose_frag(%x) %x splits by %d (%d ways)\n", VAR_1, VAR_4,
       VAR_5->split_by, VAR_6);
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   VAR_8 = FUNC_5(VAR_4, VAR_5->split_by, VAR_7);
   if (FUNC_3(VAR_8, VAR_1)) {
    VAR_4 = VAR_8;
    break;
   }
  }
  FUNC_0(VAR_7 == VAR_6);
 }
 FUNC_6("choose_frag(%x) = %x\n", VAR_1, VAR_4);

 return VAR_4;
}
