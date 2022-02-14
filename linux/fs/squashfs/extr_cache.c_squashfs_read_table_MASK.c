
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
typedef void squashfs_page_actor ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void** FUNC_1 (int,int,int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 void* FUNC_4 (void**,int,int) ;
 int FUNC_5 (struct super_block*,int ,int,int *,void*) ;

void *FUNC_6(struct super_block *VAR_5, u64 VAR_6, int VAR_7)
{
 int VAR_8 = (VAR_7 + VAR_3 - 1) >> VAR_2;
 int VAR_9, VAR_10;
 void *VAR_11, *VAR_12, **VAR_13;
 struct squashfs_page_actor *VAR_14;

 VAR_11 = VAR_12 = FUNC_3(VAR_7, VAR_1);
 if (VAR_11 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_13 = FUNC_1(VAR_8, sizeof(void *), VAR_1);
 if (VAR_13 == ((void*)0)) {
  VAR_10 = -VAR_0;
  goto failed;
 }

 VAR_14 = FUNC_4(VAR_13, VAR_8, VAR_7);
 if (VAR_14 == ((void*)0)) {
  VAR_10 = -VAR_0;
  goto failed2;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++, VAR_12 += VAR_3)
  VAR_13[VAR_9] = VAR_12;

 VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_7 |
  VAR_4, ((void*)0), VAR_14);

 FUNC_2(VAR_13);
 FUNC_2(VAR_14);

 if (VAR_10 < 0)
  goto failed;

 return VAR_11;

failed2:
 FUNC_2(VAR_13);
failed:
 FUNC_2(VAR_11);
 return FUNC_0(VAR_10);
}
