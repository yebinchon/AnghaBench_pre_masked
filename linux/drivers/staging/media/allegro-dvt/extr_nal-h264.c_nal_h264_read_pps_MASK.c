
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {int pos; scalar_t__ error; } ;
struct nal_h264_pps {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct rbsp*,struct nal_h264_pps*) ;
 int FUNC_2 (struct rbsp*) ;
 int FUNC_3 (struct rbsp*) ;
 int FUNC_4 (struct rbsp*,void*,size_t,int *) ;
 int VAR_1 ;

ssize_t FUNC_5(const struct device *VAR_2,
     struct nal_h264_pps *VAR_3, void *VAR_4, size_t VAR_5)
{
 struct rbsp VAR_6;

 if (!VAR_4)
  return -VAR_0;

 FUNC_4(&VAR_6, VAR_4, VAR_5, &VAR_1);

 FUNC_3(&VAR_6);


 VAR_6.pos += 8;

 FUNC_1(&VAR_6, VAR_3);

 FUNC_2(&VAR_6);

 if (VAR_6.error)
  return VAR_6.error;

 return FUNC_0(VAR_6.pos, 8);
}
