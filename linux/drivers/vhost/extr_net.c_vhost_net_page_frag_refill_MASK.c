
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_net {scalar_t__ refcnt_bias; } ;
struct page_frag {int offset; int size; scalar_t__ page; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_5(struct vhost_net *VAR_7, unsigned int VAR_8,
           struct page_frag *VAR_9, gfp_t VAR_10)
{
 if (VAR_9->page) {
  if (VAR_9->offset + VAR_8 <= VAR_9->size)
   return 1;
  FUNC_0(VAR_9->page, VAR_7->refcnt_bias);
 }

 VAR_9->offset = 0;
 VAR_7->refcnt_bias = 0;
 if (VAR_1) {

  VAR_9->page = FUNC_2((VAR_10 & ~VAR_4) |
       VAR_3 | VAR_6 |
       VAR_5,
       VAR_1);
  if (FUNC_3(VAR_9->page)) {
   VAR_9->size = VAR_0 << VAR_1;
   goto done;
  }
 }
 VAR_9->page = FUNC_1(VAR_10);
 if (FUNC_3(VAR_9->page)) {
  VAR_9->size = VAR_0;
  goto done;
 }
 return 0;

done:
 VAR_7->refcnt_bias = VAR_2;
 FUNC_4(VAR_9->page, VAR_2 - 1);
 return 1;
}
