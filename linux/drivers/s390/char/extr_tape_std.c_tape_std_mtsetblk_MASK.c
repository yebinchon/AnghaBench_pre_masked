
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int block_size; struct idal_buffer* idal_buf; } ;
struct tape_device {TYPE_1__ char_data; } ;
struct idal_buffer {int size; } ;


 int FUNC_0 (int,char*,int,int) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct idal_buffer*) ;
 int VAR_2 ;
 struct idal_buffer* FUNC_3 (int,int ) ;
 int FUNC_4 (struct idal_buffer*) ;

int
FUNC_5(struct tape_device *VAR_3, int VAR_4)
{
 struct idal_buffer *VAR_5;

 FUNC_1(6, "tape_std_mtsetblk(%d)\n", VAR_4);
 if (VAR_4 <= 0) {





  VAR_3->char_data.block_size = 0;
  return 0;
 }
 if (VAR_3->char_data.idal_buf != ((void*)0) &&
     VAR_3->char_data.idal_buf->size == VAR_4)

  return 0;

 if (VAR_4 > VAR_2) {
  FUNC_0(3, "Invalid block size (%d > %d) given.\n",
   VAR_4, VAR_2);
  return -VAR_0;
 }


 VAR_5 = FUNC_3(VAR_4, 0);
 if (FUNC_2(VAR_5))
  return -VAR_1;
 if (VAR_3->char_data.idal_buf != ((void*)0))
  FUNC_4(VAR_3->char_data.idal_buf);
 VAR_3->char_data.idal_buf = VAR_5;
 VAR_3->char_data.block_size = VAR_4;

 FUNC_1(6, "new blocksize is %d\n", VAR_3->char_data.block_size);

 return 0;
}
