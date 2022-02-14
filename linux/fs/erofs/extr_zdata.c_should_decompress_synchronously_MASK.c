
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct erofs_sb_info {unsigned int max_sync_decompress_pages; } ;



__attribute__((used)) static bool FUNC_0(struct erofs_sb_info *VAR_0,
         unsigned int VAR_1)
{
 return VAR_1 <= VAR_0->max_sync_decompress_pages;
}
