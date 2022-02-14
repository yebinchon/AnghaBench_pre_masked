
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusbhc {int (* bwa_set ) (struct wusbhc*,int ,struct uwb_mas_bm const*) ;} ;
struct uwb_mas_bm {int dummy; } ;


 int FUNC_0 (struct wusbhc*,int ,struct uwb_mas_bm const*) ;
 struct uwb_mas_bm VAR_0 ;

__attribute__((used)) static int FUNC_1(struct wusbhc *VAR_1, u8 VAR_2,
 const struct uwb_mas_bm *VAR_3)
{
 if (VAR_3 == ((void*)0))
  VAR_3 = &VAR_0;
 return VAR_1->bwa_set(VAR_1, VAR_2, VAR_3);
}
