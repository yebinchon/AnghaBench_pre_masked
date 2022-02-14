
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct jffs2_sb_info {size_t wbuf_len; size_t wbuf_pagesize; scalar_t__ wbuf; } ;


 int FUNC_0 (scalar_t__,int const*,size_t) ;

__attribute__((used)) static size_t FUNC_1(struct jffs2_sb_info *VAR_0, const uint8_t *VAR_1,
         size_t VAR_2)
{
 if (VAR_2 && !VAR_0->wbuf_len && (VAR_2 >= VAR_0->wbuf_pagesize))
  return 0;

 if (VAR_2 > (VAR_0->wbuf_pagesize - VAR_0->wbuf_len))
  VAR_2 = VAR_0->wbuf_pagesize - VAR_0->wbuf_len;
 FUNC_0(VAR_0->wbuf + VAR_0->wbuf_len, VAR_1, VAR_2);
 VAR_0->wbuf_len += (uint32_t) VAR_2;
 return VAR_2;
}
