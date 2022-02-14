
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wbsd_host {scalar_t__ config; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_3(struct wbsd_host *VAR_0, u8 VAR_1)
{
 FUNC_0(VAR_0->config == 0);

 FUNC_2(VAR_1, VAR_0->config);
 return FUNC_1(VAR_0->config + 1);
}
