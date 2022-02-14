
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {TYPE_2__* s_bdev; } ;
struct page {int dummy; } ;
struct address_space {TYPE_3__* host; } ;
struct TYPE_6__ {unsigned int i_size; } ;
struct TYPE_5__ {TYPE_1__* bd_inode; } ;
struct TYPE_4__ {struct address_space* i_mapping; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct page*) ;
 unsigned int VAR_4 ;
 unsigned int* VAR_5 ;
 struct super_block** VAR_6 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,int ,int) ;
 unsigned int VAR_7 ;
 int FUNC_7 (struct page*) ;
 void** VAR_8 ;
 struct page* FUNC_8 (struct address_space*,unsigned int,int *) ;
 int FUNC_9 (struct page*) ;

__attribute__((used)) static void *FUNC_10(struct super_block *VAR_9, unsigned int VAR_10,
    unsigned int VAR_11)
{
 struct address_space *VAR_12 = VAR_9->s_bdev->bd_inode->i_mapping;
 struct page *VAR_13[VAR_0];
 unsigned VAR_14, VAR_15, VAR_16;
 unsigned long VAR_17;
 char *VAR_18;

 if (!VAR_11)
  return ((void*)0);
 VAR_15 = VAR_10 >> VAR_2;
 VAR_10 &= VAR_3 - 1;


 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  unsigned int VAR_19;

  if (VAR_6[VAR_14] != VAR_9)
   continue;
  if (VAR_15 < VAR_5[VAR_14])
   continue;
  VAR_19 = (VAR_15 - VAR_5[VAR_14]) << VAR_2;
  VAR_19 += VAR_10;
  if (VAR_19 > VAR_1 ||
      VAR_19 + VAR_11 > VAR_1)
   continue;
  return VAR_8[VAR_14] + VAR_19;
 }

 VAR_17 = VAR_12->host->i_size >> VAR_2;


 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  struct page *VAR_20 = ((void*)0);

  if (VAR_15 + VAR_14 < VAR_17) {
   VAR_20 = FUNC_8(VAR_12, VAR_15 + VAR_14, ((void*)0));

   if (FUNC_0(VAR_20))
    VAR_20 = ((void*)0);
  }
  VAR_13[VAR_14] = VAR_20;
 }

 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  struct page *VAR_21 = VAR_13[VAR_14];

  if (VAR_21) {
   FUNC_9(VAR_21);
   if (!FUNC_2(VAR_21)) {

    FUNC_7(VAR_21);
    VAR_13[VAR_14] = ((void*)0);
   }
  }
 }

 VAR_16 = VAR_7;
 VAR_7 = FUNC_1(VAR_16);
 VAR_5[VAR_16] = VAR_15;
 VAR_6[VAR_16] = VAR_9;

 VAR_18 = VAR_8[VAR_16];
 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  struct page *VAR_22 = VAR_13[VAR_14];

  if (VAR_22) {
   FUNC_5(VAR_18, FUNC_3(VAR_22), VAR_3);
   FUNC_4(VAR_22);
   FUNC_7(VAR_22);
  } else
   FUNC_6(VAR_18, 0, VAR_3);
  VAR_18 += VAR_3;
 }
 return VAR_8[VAR_16] + VAR_10;
}
