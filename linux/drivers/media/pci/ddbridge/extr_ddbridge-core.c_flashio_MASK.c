
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct ddb_link {int flash_mutex; } ;
struct ddb {struct ddb_link* link; } ;


 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (struct ddb*,size_t) ;
 int FUNC_2 (struct ddb*,int,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct ddb*,size_t,int) ;
 size_t FUNC_6 (size_t) ;

__attribute__((used)) static int FUNC_7(struct ddb *VAR_2, u32 VAR_3, u8 *VAR_4, u32 VAR_5, u8 *VAR_6,
     u32 VAR_7)
{
 u32 VAR_8, VAR_9;
 u32 VAR_10 = FUNC_0(VAR_3);
 struct ddb_link *VAR_11 = &VAR_2->link[VAR_3];

 FUNC_3(&VAR_11->flash_mutex);
 if (VAR_5 > 4)
  FUNC_2(VAR_2, 1, VAR_10 | VAR_0);
 while (VAR_5 > 4) {

  VAR_8 = FUNC_6(*(u32 *)VAR_4);
  VAR_4 += 4;
  VAR_5 -= 4;
  FUNC_2(VAR_2, VAR_8, VAR_10 | VAR_1);
  if (FUNC_5(VAR_2, VAR_10 | VAR_0, 4))
   goto fail;
 }
 if (VAR_7)
  FUNC_2(VAR_2, 0x0001 | ((VAR_5 << (8 + 3)) & 0x1f00),
     VAR_10 | VAR_0);
 else
  FUNC_2(VAR_2, 0x0003 | ((VAR_5 << (8 + 3)) & 0x1f00),
     VAR_10 | VAR_0);

 VAR_8 = 0;
 VAR_9 = ((4 - VAR_5) * 8);
 while (VAR_5) {
  VAR_8 <<= 8;
  VAR_8 |= *VAR_4;
  VAR_5--;
  VAR_4++;
 }
 if (VAR_9)
  VAR_8 <<= VAR_9;
 FUNC_2(VAR_2, VAR_8, VAR_10 | VAR_1);
 if (FUNC_5(VAR_2, VAR_10 | VAR_0, 4))
  goto fail;

 if (!VAR_7) {
  FUNC_2(VAR_2, 0, VAR_10 | VAR_0);
  goto exit;
 }
 if (VAR_7 > 4)
  FUNC_2(VAR_2, 1, VAR_10 | VAR_0);

 while (VAR_7 > 4) {
  FUNC_2(VAR_2, 0xffffffff, VAR_10 | VAR_1);
  if (FUNC_5(VAR_2, VAR_10 | VAR_0, 4))
   goto fail;
  VAR_8 = FUNC_1(VAR_2, VAR_10 | VAR_1);
  *(u32 *)VAR_6 = FUNC_6(VAR_8);
  VAR_6 += 4;
  VAR_7 -= 4;
 }
 FUNC_2(VAR_2, 0x0003 | ((VAR_7 << (8 + 3)) & 0x1F00),
    VAR_10 | VAR_0);
 FUNC_2(VAR_2, 0xffffffff, VAR_10 | VAR_1);
 if (FUNC_5(VAR_2, VAR_10 | VAR_0, 4))
  goto fail;

 VAR_8 = FUNC_1(VAR_2, VAR_10 | VAR_1);
 FUNC_2(VAR_2, 0, VAR_10 | VAR_0);

 if (VAR_7 < 4)
  VAR_8 <<= ((4 - VAR_7) * 8);

 while (VAR_7 > 0) {
  *VAR_6 = ((VAR_8 >> 24) & 0xff);
  VAR_8 <<= 8;
  VAR_6++;
  VAR_7--;
 }
exit:
 FUNC_4(&VAR_11->flash_mutex);
 return 0;
fail:
 FUNC_4(&VAR_11->flash_mutex);
 return -1;
}
