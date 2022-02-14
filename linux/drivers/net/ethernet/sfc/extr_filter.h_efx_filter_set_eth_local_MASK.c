
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct efx_filter_spec {int loc_mac; int match_flags; int outer_vid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct efx_filter_spec *VAR_4,
        u16 VAR_5, const u8 *VAR_6)
{
 if (VAR_5 == VAR_2 && VAR_6 == ((void*)0))
  return -VAR_3;

 if (VAR_5 != VAR_2) {
  VAR_4->match_flags |= VAR_1;
  VAR_4->outer_vid = FUNC_1(VAR_5);
 }
 if (VAR_6 != ((void*)0)) {
  VAR_4->match_flags |= VAR_0;
  FUNC_0(VAR_4->loc_mac, VAR_6);
 }
 return 0;
}
