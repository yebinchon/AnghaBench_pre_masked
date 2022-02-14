
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int size; } ;
struct uvc_control {TYPE_1__ info; int * uvc_data; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct uvc_control *VAR_0, int VAR_1)
{
 return VAR_0->uvc_data + VAR_1 * VAR_0->info.size;
}
