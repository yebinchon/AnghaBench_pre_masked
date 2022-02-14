
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {scalar_t__ ohead_offs; int ohead_lnum; int orph_buf; int min_io_size; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ubifs_info*,int) ;
 int FUNC_2 (struct ubifs_info*,int ,int ,int) ;
 int FUNC_3 (struct ubifs_info*,int ) ;
 int FUNC_4 (struct ubifs_info*,int ,int,int) ;
 int FUNC_5 (struct ubifs_info*,int ,int,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2) {
  FUNC_1(VAR_0, VAR_0->ohead_offs == 0);
  FUNC_4(VAR_0, VAR_0->orph_buf, VAR_1, 1);
  VAR_1 = FUNC_0(VAR_1, VAR_0->min_io_size);
  VAR_3 = FUNC_2(VAR_0, VAR_0->ohead_lnum, VAR_0->orph_buf, VAR_1);
 } else {
  if (VAR_0->ohead_offs == 0) {

   VAR_3 = FUNC_3(VAR_0, VAR_0->ohead_lnum);
   if (VAR_3)
    return VAR_3;
  }
  VAR_3 = FUNC_5(VAR_0, VAR_0->orph_buf, VAR_1, VAR_0->ohead_lnum,
           VAR_0->ohead_offs);
 }
 return VAR_3;
}
