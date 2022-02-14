
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_sb_info {int dummy; } ;
struct lz4_comp_opts {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void *FUNC_3(struct squashfs_sb_info *VAR_3,
 void *VAR_4, int VAR_5)
{
 struct lz4_comp_opts *VAR_6 = VAR_4;


 if (VAR_6 == ((void*)0) || VAR_5 < sizeof(*VAR_6))
  return FUNC_1(-VAR_1);

 if (FUNC_2(VAR_6->version) != VAR_2) {


  FUNC_0("Unknown LZ4 version\n");
  return FUNC_1(-VAR_0);
 }

 return ((void*)0);
}
