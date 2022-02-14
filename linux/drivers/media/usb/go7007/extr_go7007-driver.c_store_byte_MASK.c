
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {TYPE_2__* planes; } ;
struct TYPE_4__ {TYPE_3__ vb2_buf; } ;
struct go7007_buffer {TYPE_1__ vb; } ;
struct TYPE_5__ {scalar_t__ bytesused; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct go7007_buffer *VAR_1, u8 VAR_2)
{
 if (VAR_1 && VAR_1->vb.vb2_buf.planes[0].bytesused < VAR_0) {
  u8 *VAR_3 = FUNC_0(&VAR_1->vb.vb2_buf, 0);

  VAR_3[VAR_1->vb.vb2_buf.planes[0].bytesused++] = VAR_2;
 }
}
