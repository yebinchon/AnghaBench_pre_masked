
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bnx2 {TYPE_1__* flash_info; } ;
typedef int __be32 ;
struct TYPE_2__ {int flags; int page_size; int page_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct bnx2 *VAR_9, u32 VAR_10, u8 *VAR_11, u32 VAR_12)
{
 u32 VAR_13;
 int VAR_14;


 VAR_13 = VAR_3 | VAR_12;


 if (VAR_9->flash_info->flags & VAR_6) {
  VAR_10 = ((VAR_10 / VAR_9->flash_info->page_size) <<
      VAR_9->flash_info->page_bits) +
     (VAR_10 % VAR_9->flash_info->page_size);
 }


 FUNC_1(VAR_9, VAR_2, VAR_4);


 FUNC_1(VAR_9, VAR_0, VAR_10 & VAR_1);


 FUNC_1(VAR_9, VAR_2, VAR_13);


 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  u32 VAR_15;

  FUNC_4(5);

  VAR_15 = FUNC_0(VAR_9, VAR_2);
  if (VAR_15 & VAR_4) {
   __be32 VAR_16 = FUNC_2(FUNC_0(VAR_9, VAR_5));
   FUNC_3(VAR_11, &VAR_16, 4);
   break;
  }
 }
 if (VAR_14 >= VAR_8)
  return -VAR_7;

 return 0;
}
