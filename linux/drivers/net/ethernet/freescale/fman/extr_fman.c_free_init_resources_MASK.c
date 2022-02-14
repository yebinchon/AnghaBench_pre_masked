
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman {int fifo_size; scalar_t__ fifo_offset; int muram; int cam_size; scalar_t__ cam_offset; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct fman *VAR_0)
{
 if (VAR_0->cam_offset)
  FUNC_0(VAR_0->muram, VAR_0->cam_offset,
        VAR_0->cam_size);
 if (VAR_0->fifo_offset)
  FUNC_0(VAR_0->muram, VAR_0->fifo_offset,
        VAR_0->fifo_size);
}
