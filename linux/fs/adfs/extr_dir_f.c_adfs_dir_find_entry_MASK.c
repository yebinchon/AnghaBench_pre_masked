
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct object_info {scalar_t__ indaddr; } ;
struct adfs_dir {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adfs_dir*,int,struct object_info*) ;

__attribute__((used)) static int FUNC_1(struct adfs_dir *VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = -VAR_1;

 for (VAR_4 = 5; VAR_4 < VAR_0 * 26 + 5; VAR_4 += 26) {
  struct object_info VAR_6;

  if (!FUNC_0(VAR_2, VAR_4, &VAR_6))
   break;

  if (VAR_6.indaddr == VAR_3) {
   VAR_5 = VAR_4;
   break;
  }
 }

 return VAR_5;
}
