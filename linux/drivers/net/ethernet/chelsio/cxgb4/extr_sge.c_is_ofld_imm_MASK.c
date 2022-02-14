
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_request_hdr {int wr_hi; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(const struct sk_buff *VAR_3)
{
 struct work_request_hdr *VAR_4 = (struct work_request_hdr *)VAR_3->data;
 unsigned long VAR_5 = FUNC_0(FUNC_1(VAR_4->wr_hi));

 if (VAR_5 == VAR_0)
  return VAR_3->len <= VAR_2;
 else
  return VAR_3->len <= VAR_1;
}
