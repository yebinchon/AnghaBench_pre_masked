
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; int * data; } ;
typedef int seqid ;
typedef int lo ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_5, u16 VAR_6, u32 VAR_7, u16 VAR_8)
{
 u8 *VAR_9 = VAR_5->data;
 unsigned int VAR_10;
 u16 *VAR_11, *VAR_12;
 u32 VAR_13;

 if (FUNC_4(VAR_5) != VAR_3)
  return 0;

 VAR_10 = VAR_0 + FUNC_0(VAR_9) + VAR_4;

 if (VAR_5->len < VAR_10 + VAR_1 + sizeof(VAR_8))
  return 0;

 VAR_11 = (u16 *)(VAR_9 + VAR_10 + VAR_2);
 VAR_12 = (u16 *)(VAR_9 + VAR_10 + VAR_1);

 FUNC_1(&VAR_13, &VAR_11[1], sizeof(VAR_13));

 return (VAR_6 == FUNC_3(*VAR_11) &&
  VAR_7 == FUNC_2(VAR_13) &&
  VAR_8 == FUNC_3(*VAR_12));
}
