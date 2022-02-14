
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int data; } ;
struct mlxsw_core {TYPE_1__* driver; } ;
struct TYPE_2__ {scalar_t__ txhdr_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 struct sk_buff* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_3(const struct mlxsw_core *VAR_4,
     u16 VAR_5)
{
 struct sk_buff *VAR_6;
 u16 VAR_7;

 VAR_7 = (VAR_5 + sizeof(u32) + VAR_1 +
      (VAR_3 + VAR_0) *
      sizeof(u32) + VAR_4->driver->txhdr_len);
 if (VAR_7 > VAR_2)
  return ((void*)0);

 VAR_6 = FUNC_1(((void*)0), VAR_7);
 if (!VAR_6)
  return ((void*)0);
 FUNC_0(VAR_6->data, 0, VAR_7);
 FUNC_2(VAR_6, VAR_7);

 return VAR_6;
}
