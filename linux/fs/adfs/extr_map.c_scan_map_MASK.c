
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adfs_sb_info {unsigned int s_idlen; unsigned int s_map_size; struct adfs_discmap* s_map; } ;
struct adfs_discmap {scalar_t__ dm_startblk; scalar_t__ dm_startbit; } ;


 int FUNC_0 (struct adfs_discmap*,unsigned int const,int const,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct adfs_sb_info *VAR_0, unsigned int VAR_1,
      const u32 VAR_2, unsigned int VAR_3)
{
 const unsigned int VAR_4 = VAR_0->s_idlen;
 struct adfs_discmap *VAR_5, *VAR_6;
 int VAR_7;

 VAR_5 = VAR_0->s_map + VAR_1;
 VAR_1 = VAR_0->s_map_size;
 VAR_6 = VAR_0->s_map + VAR_1;

 do {
  VAR_7 = FUNC_0(VAR_5, VAR_4, VAR_2, &VAR_3);

  if (VAR_7 != -1)
   goto found;

  VAR_5 ++;
  if (VAR_5 == VAR_6)
   VAR_5 = VAR_0->s_map;
 } while (--VAR_1 > 0);

 return -1;
found:
 VAR_7 -= VAR_5->dm_startbit;
 VAR_7 += VAR_5->dm_startblk;

 return VAR_7;
}
