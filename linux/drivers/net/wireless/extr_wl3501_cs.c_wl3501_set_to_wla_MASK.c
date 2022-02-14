
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl3501_card {scalar_t__ base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (scalar_t__,void*,int) ;
 int FUNC_2 (struct wl3501_card*,int ) ;

__attribute__((used)) static void FUNC_3(struct wl3501_card *VAR_5, u16 VAR_6, void *VAR_7,
         int VAR_8)
{

 FUNC_2(VAR_5, (VAR_6 & 0x8000) ? VAR_1 :
         VAR_0);

 FUNC_0(VAR_6 & 0xff, VAR_5->base_addr + VAR_4);
 FUNC_0(((VAR_6 >> 8) & 0x7f), VAR_5->base_addr + VAR_3);


 FUNC_1(VAR_5->base_addr + VAR_2, VAR_7, VAR_8);
}
