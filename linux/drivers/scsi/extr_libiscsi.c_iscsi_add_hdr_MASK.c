
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_task {unsigned int hdr_len; unsigned int hdr_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static int FUNC_1(struct iscsi_task *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4 = VAR_2->hdr_len + VAR_3;

 if (VAR_4 > VAR_2->hdr_max) {
  FUNC_0(1);
  return -VAR_0;
 }

 FUNC_0(VAR_3 & (VAR_1 - 1));
 VAR_2->hdr_len = VAR_4;
 return 0;
}
