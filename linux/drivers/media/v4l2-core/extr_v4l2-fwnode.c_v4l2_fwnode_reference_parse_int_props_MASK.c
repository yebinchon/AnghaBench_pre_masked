
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fwnode_int_props {char* name; char** props; unsigned int nprops; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int dummy; } ;
typedef struct v4l2_async_subdev fwnode_handle ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct v4l2_async_subdev*) ;
 int FUNC_1 (struct v4l2_async_subdev*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct v4l2_async_subdev*) ;
 struct v4l2_async_subdev* FUNC_4 (struct v4l2_async_notifier*,struct v4l2_async_subdev*,int) ;
 struct v4l2_async_subdev* FUNC_5 (int ,char const*,unsigned int,char const* const*,unsigned int) ;

__attribute__((used)) static int
FUNC_6(struct device *VAR_3,
          struct v4l2_async_notifier *VAR_4,
          const struct v4l2_fwnode_int_props *VAR_5)
{
 struct fwnode_handle *VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 const char *VAR_9 = VAR_5->name;
 const char * const *VAR_10 = VAR_5->props;
 unsigned int VAR_11 = VAR_5->nprops;

 VAR_7 = 0;
 do {
  VAR_6 = FUNC_5(FUNC_2(VAR_3),
           VAR_9, VAR_7,
           VAR_10, VAR_11);
  if (FUNC_0(VAR_6)) {





   if (FUNC_1(VAR_6) != -VAR_2 &&
       FUNC_1(VAR_6) != -VAR_1)
    return FUNC_1(VAR_6);
   break;
  }
  FUNC_3(VAR_6);
  VAR_7++;
 } while (1);

 for (VAR_7 = 0;
      !FUNC_0((VAR_6 = FUNC_5(FUNC_2(VAR_3),
          VAR_9, VAR_7,
          VAR_10,
          VAR_11)));
      VAR_7++) {
  struct v4l2_async_subdev *VAR_12;

  VAR_12 = FUNC_4(VAR_4, VAR_6,
           sizeof(*VAR_12));
  FUNC_3(VAR_6);
  if (FUNC_0(VAR_12)) {
   VAR_8 = FUNC_1(VAR_12);

   if (VAR_8 == -VAR_0)
    continue;

   return FUNC_1(VAR_12);
  }
 }

 return !VAR_6 || FUNC_1(VAR_6) == -VAR_2 ? 0 : FUNC_1(VAR_6);
}
