
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rt6_info {int dummy; } ;
struct dst_entry {int dummy; } ;


 struct dst_entry* FUNC_0 (struct dst_entry*,int ) ;
 int FUNC_1 (struct rt6_info*) ;
 struct dst_entry* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline struct dst_entry *FUNC_3(struct sk_buff *VAR_0, int VAR_1)
{
 struct dst_entry *VAR_2 = FUNC_2(VAR_0);
 struct rt6_info *VAR_3;

 VAR_3 = (struct rt6_info *) VAR_2;
 if (VAR_2)
  VAR_2 = FUNC_0(VAR_2, (VAR_1 == 6) ? FUNC_1(VAR_3) : 0);
 return VAR_2;
}
