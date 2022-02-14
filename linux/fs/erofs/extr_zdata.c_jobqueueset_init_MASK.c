
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * z_erofs_next_pcluster_t ;
struct z_erofs_unzip_io {int head; } ;
struct super_block {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct z_erofs_unzip_io* FUNC_0 (struct super_block*,struct z_erofs_unzip_io*,int) ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct z_erofs_unzip_io*,int) ;

__attribute__((used)) static void *FUNC_3(struct super_block *VAR_3,
         z_erofs_next_pcluster_t VAR_4[],
         struct z_erofs_unzip_io *VAR_5[],
         struct z_erofs_unzip_io *VAR_6,
         bool VAR_7)
{




 VAR_5[VAR_0] = FUNC_0(VAR_3, VAR_6 + VAR_0, 1);
 VAR_4[VAR_0] = &VAR_5[VAR_0]->head;

 VAR_5[VAR_1] = FUNC_0(VAR_3, VAR_6 + VAR_1, VAR_7);
 VAR_4[VAR_1] = &VAR_5[VAR_1]->head;

 return FUNC_1(FUNC_2(VAR_2, VAR_5[VAR_1], !VAR_7));
}
