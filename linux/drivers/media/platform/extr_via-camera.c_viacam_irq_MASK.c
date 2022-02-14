
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct via_camera {int n_cap_bufs; int lock; int sequence; int * cb_offsets; } ;
struct TYPE_5__ {int timestamp; } ;
struct TYPE_4__ {TYPE_2__ vb2_buf; int field; scalar_t__ sequence; } ;
struct via_buffer {TYPE_1__ vbuf; int queue; } ;
struct sg_table {int nents; int sgl; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 struct sg_table* FUNC_5 (TYPE_2__*,int ) ;
 struct via_buffer* FUNC_6 (struct via_camera*) ;
 int FUNC_7 (struct via_camera*,int ) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_5, void *VAR_6)
{
 struct via_camera *VAR_7 = VAR_6;
 struct via_buffer *VAR_8;
 int VAR_9;
 struct sg_table *VAR_10;

 FUNC_2(&VAR_7->lock);




 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8 == ((void*)0))
  goto done;



 VAR_9 = (FUNC_7(VAR_7, VAR_4) & VAR_3) >> 3;
 VAR_9 -= 1;
 if (VAR_9 < 0)
  VAR_9 = VAR_7->n_cap_bufs - 1;



 VAR_10 = FUNC_5(&VAR_8->vbuf.vb2_buf, 0);
 VAR_8->vbuf.vb2_buf.timestamp = FUNC_0();
 FUNC_8(VAR_7->cb_offsets[VAR_9], VAR_10->sgl, VAR_10->nents);
 VAR_8->vbuf.sequence = VAR_7->sequence++;
 VAR_8->vbuf.field = VAR_1;
 FUNC_1(&VAR_8->queue);
 FUNC_4(&VAR_8->vbuf.vb2_buf, VAR_2);
done:
 FUNC_3(&VAR_7->lock);
 return VAR_0;
}
