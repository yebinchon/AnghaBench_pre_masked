
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct idal_buffer* idal_buf; } ;
struct tape_device {TYPE_1__ char_data; } ;
struct idal_buffer {size_t size; } ;


 int FUNC_0 (int,char*,size_t,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct idal_buffer*) ;
 size_t VAR_2 ;
 struct idal_buffer* FUNC_2 (size_t,int ) ;
 int FUNC_3 (struct idal_buffer*) ;

__attribute__((used)) static int
FUNC_4(struct tape_device *VAR_3, size_t VAR_4)
{
 struct idal_buffer *VAR_5;

 if (VAR_3->char_data.idal_buf != ((void*)0) &&
     VAR_3->char_data.idal_buf->size == VAR_4)
  return 0;

 if (VAR_4 > VAR_2) {
  FUNC_0(3, "Invalid blocksize (%zd > %d)\n",
   VAR_4, VAR_2);
  return -VAR_0;
 }


 VAR_5 = FUNC_2(VAR_4, 0);
 if (FUNC_1(VAR_5))
  return -VAR_1;

 if (VAR_3->char_data.idal_buf != ((void*)0))
  FUNC_3(VAR_3->char_data.idal_buf);

 VAR_3->char_data.idal_buf = VAR_5;

 return 0;
}
