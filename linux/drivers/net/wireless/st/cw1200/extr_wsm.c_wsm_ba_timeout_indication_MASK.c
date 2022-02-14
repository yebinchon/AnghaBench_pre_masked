
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wsm_buf*,int *,int) ;
 int FUNC_1 (struct wsm_buf*) ;
 int FUNC_2 (struct wsm_buf*) ;
 int FUNC_3 (char*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct cw1200_common *VAR_2,
         struct wsm_buf *VAR_3)
{
 u32 VAR_4;
 u8 VAR_5;
 u8 VAR_6;
 u8 VAR_7[VAR_1];

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = FUNC_2(VAR_3);
 FUNC_0(VAR_3, VAR_7, VAR_1);

 FUNC_3("BlockACK timeout, tid %d, addr %pM\n",
  VAR_5, VAR_7);

 return 0;

underflow:
 return -VAR_0;
}
