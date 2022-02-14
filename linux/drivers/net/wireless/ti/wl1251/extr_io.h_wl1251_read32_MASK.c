
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wl1251 {int buffer_32; TYPE_1__* if_ops; } ;
struct TYPE_2__ {int (* read ) (struct wl1251*,int,int *,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl1251*,int,int *,int) ;

__attribute__((used)) static inline u32 FUNC_2(struct wl1251 *VAR_0, int VAR_1)
{
 VAR_0->if_ops->read(VAR_0, VAR_1, &VAR_0->buffer_32, sizeof(VAR_0->buffer_32));

 return FUNC_0(VAR_0->buffer_32);
}
