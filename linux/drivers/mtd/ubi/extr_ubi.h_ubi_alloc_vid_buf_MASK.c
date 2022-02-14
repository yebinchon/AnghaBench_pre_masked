
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vid_io_buf {int dummy; } ;
struct ubi_device {int vid_hdr_alsize; } ;
typedef int gfp_t ;


 int FUNC_0 (struct ubi_vid_io_buf*) ;
 void* FUNC_1 (int ,int ) ;
 struct ubi_vid_io_buf* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ubi_device const*,struct ubi_vid_io_buf*,void*) ;

__attribute__((used)) static inline struct ubi_vid_io_buf *
FUNC_4(const struct ubi_device *VAR_0, gfp_t VAR_1)
{
 struct ubi_vid_io_buf *VAR_2;
 void *VAR_3;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_0->vid_hdr_alsize, VAR_1);
 if (!VAR_3) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 FUNC_3(VAR_0, VAR_2, VAR_3);

 return VAR_2;
}
