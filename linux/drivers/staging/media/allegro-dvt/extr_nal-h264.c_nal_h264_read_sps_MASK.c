
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {int pos; scalar_t__ error; } ;
struct nal_h264_sps {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct rbsp*,struct nal_h264_sps*) ;
 int FUNC_2 (struct rbsp*) ;
 int FUNC_3 (struct rbsp*) ;
 int FUNC_4 (struct rbsp*,unsigned int*) ;
 int FUNC_5 (struct rbsp*,int,unsigned int*) ;
 int FUNC_6 (struct rbsp*,void*,size_t,int *) ;
 int VAR_2 ;

ssize_t FUNC_7(const struct device *VAR_3,
     struct nal_h264_sps *VAR_4, void *VAR_5, size_t VAR_6)
{
 struct rbsp VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;

 if (!VAR_5)
  return -VAR_0;

 FUNC_6(&VAR_7, VAR_5, VAR_6, &VAR_2);

 FUNC_3(&VAR_7);

 FUNC_4(&VAR_7, &VAR_8);
 FUNC_5(&VAR_7, 2, &VAR_9);
 FUNC_5(&VAR_7, 5, &VAR_10);

 if (VAR_7.error ||
     VAR_8 != 0 ||
     VAR_9 != 0 ||
     VAR_10 != VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_7, VAR_4);

 FUNC_2(&VAR_7);

 if (VAR_7.error)
  return VAR_7.error;

 return FUNC_0(VAR_7.pos, 8);
}
