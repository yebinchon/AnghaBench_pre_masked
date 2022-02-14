
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_common {unsigned int fsg_num_buffers; struct fsg_buffhd* buffhds; } ;
struct fsg_buffhd {struct fsg_buffhd* next; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fsg_buffhd*,unsigned int) ;
 struct fsg_buffhd* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct fsg_common *VAR_3, unsigned int VAR_4)
{
 struct fsg_buffhd *VAR_5, *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_4, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;


 VAR_5 = VAR_6;
 VAR_7 = VAR_4;
 goto buffhds_first_it;
 do {
  VAR_5->next = VAR_5 + 1;
  ++VAR_5;
buffhds_first_it:
  VAR_5->buf = FUNC_2(VAR_1, VAR_2);
  if (FUNC_3(!VAR_5->buf))
   goto error_release;
 } while (--VAR_7);
 VAR_5->next = VAR_6;

 FUNC_0(VAR_3->buffhds, VAR_3->fsg_num_buffers);
 VAR_3->fsg_num_buffers = VAR_4;
 VAR_3->buffhds = VAR_6;

 return 0;

error_release:




 FUNC_0(VAR_6, VAR_4);

 return -VAR_0;
}
