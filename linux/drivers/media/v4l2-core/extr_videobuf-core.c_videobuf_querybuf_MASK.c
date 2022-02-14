
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {scalar_t__ type; int ** bufs; } ;
struct v4l2_buffer {scalar_t__ type; size_t index; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct videobuf_queue*) ;
 int FUNC_3 (struct videobuf_queue*) ;
 int FUNC_4 (struct videobuf_queue*,struct v4l2_buffer*,int *,scalar_t__) ;

int FUNC_5(struct videobuf_queue *VAR_2, struct v4l2_buffer *VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_2(VAR_2);
 if (FUNC_1(VAR_3->type != VAR_2->type)) {
  FUNC_0(1, "querybuf: Wrong type.\n");
  goto done;
 }
 if (FUNC_1(VAR_3->index >= VAR_1)) {
  FUNC_0(1, "querybuf: index out of range.\n");
  goto done;
 }
 if (FUNC_1(((void*)0) == VAR_2->bufs[VAR_3->index])) {
  FUNC_0(1, "querybuf: buffer is null.\n");
  goto done;
 }

 FUNC_4(VAR_2, VAR_3, VAR_2->bufs[VAR_3->index], VAR_2->type);

 VAR_4 = 0;
done:
 FUNC_3(VAR_2);
 return VAR_4;
}
