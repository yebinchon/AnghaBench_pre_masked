
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct aq_rx_filter_l3l4 {int is_ipv6; scalar_t__ location; } ;
struct aq_hw_s {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*,unsigned int,scalar_t__) ;
 int FUNC_2 (struct aq_hw_s*,unsigned int,scalar_t__) ;
 int FUNC_3 (struct aq_hw_s*,scalar_t__) ;
 int FUNC_4 (struct aq_hw_s*,scalar_t__) ;
 int FUNC_5 (struct aq_hw_s*,scalar_t__) ;
 int FUNC_6 (struct aq_hw_s*,scalar_t__) ;
 int FUNC_7 (struct aq_hw_s*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct aq_hw_s *VAR_1,
        struct aq_rx_filter_l3l4 *VAR_2)
{
 u8 VAR_3 = VAR_2->location;

 if (!VAR_2->is_ipv6) {
  FUNC_3(VAR_1, VAR_3);
  FUNC_2(VAR_1, 0U, VAR_3);
  FUNC_1(VAR_1, 0U, VAR_3);
  FUNC_5(VAR_1, VAR_3);
  FUNC_4(VAR_1, VAR_3);
 } else {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
   FUNC_3(VAR_1, VAR_3 + VAR_4);
   FUNC_2(VAR_1, 0U, VAR_3 + VAR_4);
   FUNC_1(VAR_1, 0U, VAR_3 + VAR_4);
  }
  FUNC_7(VAR_1, VAR_3);
  FUNC_6(VAR_1, VAR_3);
 }

 return FUNC_0(VAR_1);
}
