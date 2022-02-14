
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct page {int dummy; } ;
struct inode {int i_sb; struct address_space* i_mapping; } ;
struct erofs_qstr {int * end; int * name; } ;
struct erofs_dirent {int nameoff; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {int nid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct erofs_qstr*,struct erofs_qstr*,unsigned int*) ;
 int FUNC_5 (int ,char*,int const,int ) ;
 int FUNC_6 (struct inode*) ;
 struct erofs_dirent* FUNC_7 (struct page*) ;
 int FUNC_8 (struct erofs_dirent*) ;
 unsigned int FUNC_9 (unsigned int,unsigned int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct page*) ;
 struct page* FUNC_12 (struct address_space* const,int const,int *) ;

__attribute__((used)) static struct page *FUNC_13(struct inode *VAR_3,
           struct erofs_qstr *VAR_4,
           int *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 struct address_space *const VAR_10 = VAR_3->i_mapping;
 struct page *VAR_11 = FUNC_2(-VAR_1);

 VAR_6 = VAR_7 = 0;
 VAR_8 = 0;
 VAR_9 = FUNC_6(VAR_3) - 1;

 while (VAR_8 <= VAR_9) {
  const int VAR_12 = VAR_8 + (VAR_9 - VAR_8) / 2;
  struct page *VAR_13 = FUNC_12(VAR_10, VAR_12, ((void*)0));

  if (!FUNC_3(VAR_13)) {
   struct erofs_dirent *VAR_14 = FUNC_7(VAR_13);
   const int VAR_15 = FUNC_10(VAR_14->nameoff,
             VAR_2);
   const int VAR_16 = VAR_15 / sizeof(*VAR_14);
   int VAR_17;
   unsigned int VAR_18;
   struct erofs_qstr VAR_19;

   if (!VAR_16) {
    FUNC_8(VAR_14);
    FUNC_11(VAR_13);
    FUNC_5(VAR_3->i_sb,
       "corrupted dir block %d @ nid %llu",
       VAR_12, FUNC_1(VAR_3)->nid);
    FUNC_0(1);
    VAR_13 = FUNC_2(-VAR_0);
    goto out;
   }

   VAR_18 = FUNC_9(VAR_6, VAR_7);

   VAR_19.name = (u8 *)VAR_14 + VAR_15;
   if (VAR_16 == 1)
    VAR_19.end = (u8 *)VAR_14 + VAR_2;
   else
    VAR_19.end = (u8 *)VAR_14 +
     FUNC_10(VAR_14[1].nameoff,
         VAR_2);


   VAR_17 = FUNC_4(VAR_4, &VAR_19, &VAR_18);
   FUNC_8(VAR_14);

   if (!VAR_17) {
    *VAR_5 = 0;
    goto out;
   } else if (VAR_17 > 0) {
    VAR_8 = VAR_12 + 1;
    VAR_6 = VAR_18;

    if (!FUNC_3(VAR_11))
     FUNC_11(VAR_11);
    VAR_11 = VAR_13;
    *VAR_5 = VAR_16;
   } else {
    FUNC_11(VAR_13);

    VAR_9 = VAR_12 - 1;
    VAR_7 = VAR_18;
   }
   continue;
  }
out:
  if (!FUNC_3(VAR_11))
   FUNC_11(VAR_11);
  return VAR_13;
 }
 return VAR_11;
}
